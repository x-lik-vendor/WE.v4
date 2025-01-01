# /*
#  *  BJ�����Ż� -- Group
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_GROUP_H
#define INCLUDE_BJ_OPTIMIZATION_GROUP_H
#                                                        
#  define GroupAddUnitSimple(unit, group)                        GroupAddUnit(group, unit)
#  define GroupRemoveUnitSimple(unit, group)                     GroupRemoveUnit(group, unit)
#  define ForceAddPlayerSimple(player, force)                    ForceAddPlayer(force, player)
#  define ForceRemovePlayerSimple(player, force)                 ForceRemovePlayer(force, player)
#  define GetUnitsInRangeOfLocAll(radius, location)              GetUnitsInRangeOfLocMatching(radius, location, null)
#  define GetUnitsOfPlayerAll(player)                            GetUnitsOfPlayerMatching(player, null)
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define GetPlayersAll()                                        bj_FORCE_ALL_PLAYERS
#
#endif
