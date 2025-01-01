# /*
#  *  BJ�����Ż� -- Math
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_MATH_H
#define INCLUDE_BJ_OPTIMIZATION_MATH_H
#                                                        
#  define bj_PI                                                  3.14159
#  define bj_RADTODEG                                            57.2958
#  define bj_DEGTORAD                                            0.0174538
#  define SinBJ(degrees)                                         Sin((degrees)*bj_DEGTORAD)
#  define CosBJ(degrees)                                         Cos((degrees)*bj_DEGTORAD)
#  define SinBJ(degrees)                                         Sin((degrees)*bj_DEGTORAD)
#  define TanBJ(degrees)                                         Tan((degrees)*bj_DEGTORAD)
#  define GetRandomDirectionDeg()                                GetRandomReal(0, 360)
#  define GetRandomPercentageBJ()                                GetRandomReal(0, 100)
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define AsinBJ(degrees)                                        (Asin(degrees)*bj_RADTODEG)
#  define AcosBJ(degrees)                                        (Acos(degrees)*bj_RADTODEG)
#  define AtanBJ(degrees)                                        (Atan(degrees)*bj_RADTODEG)
#  define Atan2BJ(y, x)                                          (Atan2(y, x)*bj_RADTODEG)
#
#endif
