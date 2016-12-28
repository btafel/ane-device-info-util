winrar e ..\..\adt\DeviceInfoUtil-android\libDeviceInfoUtil-android\build\outputs\aar\libDeviceInfoUtil-android-release.aar classes.jar -y ..\..\adt\DeviceInfoUtil-android\libDeviceInfoUtil-android\build\outputs\aar\ 
copy ..\..\adt\DeviceInfoUtil-android\libDeviceInfoUtil-android\build\outputs\aar\classes.jar libDeviceInfoUtil-android.jar /Y 
echo "packing ane-device-info-util..."
adt -package -target ane device-info-util.ane extension.xml -swc device-info-util.swc -platform Android-ARM library.swf libDeviceInfoUtil-android.jar 
echo "Done!"
pause