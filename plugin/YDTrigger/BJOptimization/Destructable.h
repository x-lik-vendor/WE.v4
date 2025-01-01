# /*
#  *  BJ�����Ż� -- Destructable
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_DESTRUCTABLE_H
#define INCLUDE_BJ_OPTIMIZATION_DESTRUCTABLE_H
#
#  define ShowDestructableBJ(flag, d)                                      ShowDestructable(d, flag)
#  define SetDestructableInvulnerableBJ(d, flag)                           SetDestructableInvulnerable(d, flag)
#  define IsDestructableInvulnerableBJ(d, flag)                            IsDestructableInvulnerable(d)
#  define EnumDestructablesInRectAll(r, actionFunc)                        EnumDestructablesInRect(r, null, actionFunc)
#  define RandomDestructableInRectSimpleBJ(r)                              RandomDestructableInRectBJ(r, null)
#  define SetDestructableMaxLifeBJ(d, max)                                 SetDestructableMaxLife(d, max)
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define GetLastCreatedDestructable()                                     bj_lastCreatedDestructable
#  define IsDestructableDeadBJ(d)                                          (GetDestructableLife(d) <= 0)
#  define IsDestructableAliveBJ(d)                                         (GetDestructableLife(d) >  0)
#
#endif
