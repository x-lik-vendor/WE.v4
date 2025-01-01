local event = require 'ev'
local wtgloader = require 'fix-wtg.loader'
local lniloader = require 'fix-wtg.lniloader'

local ignore_once = {}
event.on('virtual_mpq: open map', function(mappath)
    if ignore_once[mappath] then
        ignore_once[mappath] = nil
        log.info('ignore open', mappath)
        return
    end
    ignore_once[mappath] = true
    log.info('Open map', mappath)
    lniloader.load(mappath)
    wtgloader(mappath)
    event.emit('打开地图', mappath)
end)

event.on('virtual_mpq: close map', function(mappath)
    ignore_once[mappath] = nil
    log.info('Close map', mappath)
    lniloader.unload(mappath)
end)
