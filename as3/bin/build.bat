#!/bin/bash
winrar e C:\Users\Bryan\AndroidStudioProjects\MyANE\libDeviceInfoUtil-android\build\outputs\aar\libDeviceInfoUtil-android-release.aar classes.jar -y C:\Users\Bryan\AndroidStudioProjects\MyANE\libDeviceInfoUtil-android\build\outputs\aar\ 
copy C:\Users\Bryan\AndroidStudioProjects\MyANE\libDeviceInfoUtil-android\build\outputs\aar\classes.jar "C:\Users\Bryan\Documents\GitHub\ane-device-info-util\as3\bin\libDeviceInfoUtil-android.jar" /Y 
echo "packing ane-device-info-util..."
adt -package -target ane device-info-util.ane extension.xml -swc device-info-util.swc -platform Android-ARM library.swf libDeviceInfoUtil-android.jar 
echo "Done!"
pause