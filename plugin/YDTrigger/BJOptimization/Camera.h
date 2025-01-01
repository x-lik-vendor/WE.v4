# /*
#  *  BJ�����Ż� -- Camera
#  *
#  *  By actboy168
#  *
#  */
#
#ifndef INCLUDE_BJ_OPTIMIZATION_CAMERA_H
#define INCLUDE_BJ_OPTIMIZATION_CAMERA_H
#
#  define CameraSetupGetFieldSwap(field, setup)                  CameraSetupGetField(setup, field)
#  define GetCurrentCameraBoundsMapRectBJ()                      Rect(GetCameraBoundMinX(), GetCameraBoundMinY(), GetCameraBoundMaxX(), GetCameraBoundMaxY())
#  define GetEntireMapRect()                                     GetWorldBounds()
#  define CameraSetSmoothingFactorBJ(factor)                     CameraSetSmoothingFactor(factor)
#  define CameraResetSmoothingFactorBJ()                         CameraSetSmoothingFactor(0)
#
# /*
#  *  �з���ֵ�ĺ���, ��ĳЩ�����»��������
#  *    call GetLastCreatedUnit()
#  *  ������������д��ĳ����������˵Ҳ����һ�ִ�����ɡ�
#  */
#
#  define GetCameraBoundsMapRect()                               bj_mapInitialCameraBounds
#  define GetPlayableMapRect()                                   bj_mapInitialPlayableArea
#
#endif
