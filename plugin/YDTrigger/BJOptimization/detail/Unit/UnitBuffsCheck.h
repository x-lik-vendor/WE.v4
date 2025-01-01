# /*
#  *  buff�����
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_UNIT_BUFFS_CHECK_H
#define INCLUDE_BJ_OPTIMIZATION_UNIT_BUFFS_CHECK_H
#
#  include <YDTrigger/Common/bool/or.h>
#
# define UNIT_BUFFS_EX_POS_CHECK(polarity) YDTRIGGER_COMMON_BOOL_OR(UNIT_BUFFS_EX_POS_##polarity, UNIT_BUFFS_EX_POS_##polarity)
# define UNIT_BUFFS_EX_NEG_CHECK(polarity) YDTRIGGER_COMMON_BOOL_OR(UNIT_BUFFS_EX_NEG_##polarity, UNIT_BUFFS_EX_NEG_##polarity)
# define UNIT_BUFFS_EX_MAG_CHECK(resist)   YDTRIGGER_COMMON_BOOL_OR(UNIT_BUFFS_EX_MAG_##resist,   UNIT_BUFFS_EX_MAG_##resist)
# define UNIT_BUFFS_EX_PHY_CHECK(resist)   YDTRIGGER_COMMON_BOOL_OR(UNIT_BUFFS_EX_PHY_##resist,   UNIT_BUFFS_EX_PHY_##resist)
#
# define UNIT_BUFFS_EX_POS_bj_BUFF_POLARITY_EITHER   true
# define UNIT_BUFFS_EX_POS_bj_BUFF_POLARITY_POSITIVE true
# define UNIT_BUFFS_EX_POS_bj_BUFF_POLARITY_NEGATIVE false
#
# define UNIT_BUFFS_EX_NEG_bj_BUFF_POLARITY_EITHER   true
# define UNIT_BUFFS_EX_NEG_bj_BUFF_POLARITY_POSITIVE false
# define UNIT_BUFFS_EX_NEG_bj_BUFF_POLARITY_NEGATIVE true
#
# define UNIT_BUFFS_EX_MAG_bj_BUFF_RESIST_BOTH       true
# define UNIT_BUFFS_EX_MAG_bj_BUFF_RESIST_EITHER     false
# define UNIT_BUFFS_EX_MAG_bj_BUFF_RESIST_MAGIC      true
# define UNIT_BUFFS_EX_MAG_bj_BUFF_RESIST_PHYSICAL   false

# define UNIT_BUFFS_EX_PHY_bj_BUFF_RESIST_BOTH       true
# define UNIT_BUFFS_EX_PHY_bj_BUFF_RESIST_EITHER     false
# define UNIT_BUFFS_EX_PHY_bj_BUFF_RESIST_MAGIC      false
# define UNIT_BUFFS_EX_PHY_bj_BUFF_RESIST_PHYSICAL   true
#
#endif
