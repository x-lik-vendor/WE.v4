# /*
#  *  BJ�����Ż� -- Quest
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_QUEST_H
#define INCLUDE_BJ_OPTIMIZATION_QUEST_H
#                                                        
#  define DestroyQuestBJ(quest)                                       DestroyQuest(quest)
#  define QuestSetEnabledBJ(enabled, quest)                           QuestSetEnabled(quest, enabled)
#  define QuestSetTitleBJ(quest, title)                               QuestSetTitle(quest, title)
#  define QuestSetDescriptionBJ(quest, description)                   QuestSetDescription(quest, description)
#  define QuestSetCompletedBJ(quest, completed)                       QuestSetCompleted(quest, completed)
#  define QuestSetFailedBJ(quest, failed)                             QuestSetFailed(quest, failed)
#  define QuestSetDiscoveredBJ(quest, discovered)                     QuestSetDiscovered(quest, discovered)
#  define QuestItemSetDescriptionBJ(questItem, description)           QuestItemSetDescription(questItem, description)
#  define QuestItemSetCompletedBJ(questItem, completed)               QuestItemSetCompleted(questItem, completed)
#  define DestroyDefeatConditionBJ(condition)                         DestroyDefeatCondition(condition)
#  define DefeatConditionSetDescriptionBJ(condition, description)     DefeatConditionSetDescription(condition, description)
#  define FlashQuestDialogButtonBJ()                                  FlashQuestDialogButton()
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define GetLastCreatedQuestBJ()                                     bj_lastCreatedQuest
#  define GetLastCreatedQuestItemBJ()                                 bj_lastCreatedQuestItem
#  define GetLastCreatedDefeatConditionBJ()                           bj_lastCreatedDefeatCondition
#
#endif
