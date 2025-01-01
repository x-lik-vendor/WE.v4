# /*
#  *  BJ�����Ż� -- General
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_GENERAL_H
#define INCLUDE_BJ_OPTIMIZATION_GENERAL_H
#
#  define StringIdentity(theString)                              GetLocalizedString(theString)
#  define PercentTo255(percentage)                               PercentToInt(percentage, 255)
#  define GetTimeOfDay()                                         GetFloatGameState(GAME_STATE_TIME_OF_DAY)
#  define SetTimeOfDay(time)                                     SetFloatGameState(GAME_STATE_TIME_OF_DAY, time)
#  define SetTimeOfDayScalePercentBJ(scalePercent)               SetTimeOfDayScale((scalePercent) * 0.01)
#
#  define SubStringBJ(source, start, end)                        SubString(source, (start)-1, end)
#  define GetHandleIdBJ(h)                                       GetHandleId(h)
#  define StringHashBJ(s)                                        StringHash(s)
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define QueuedTriggerCountBJ()                                 bj_queuedExecTotal
#  define IsTriggerQueueEmptyBJ()                                (bj_queuedExecTotal <= 0)
#  define IsTriggerQueuedBJ(trig)                                (QueuedTriggerGetIndex(trig) != -1)
#  define GetForLoopIndexA()                                     bj_forLoopAIndex
#  define GetForLoopIndexB()                                     bj_forLoopBIndex
#  define IsTriggerQueueEmptyBJ()                                (bj_queuedExecTotal <= 0)
#  define IsTriggerQueuedBJ(trig)                                (QueuedTriggerGetIndex(trig) != -1)
#  define GetForLoopIndexA()                                     bj_forLoopAIndex
#  define GetBooleanAnd(A, B)                                    ((A) and (B))
#  define GetBooleanOr(A, B)                                     ((A) or (B))
#  define GetTimeOfDayScalePercentBJ()                           (GetTimeOfDayScale() * 100)
#
#endif
