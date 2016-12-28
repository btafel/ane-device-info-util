winrar e ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\libMofiler-android-release.aar classes.jar -y ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\ 
winrar e ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\libMofiler-android-release.aar libs\mofiler-sdk.jar -y ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\ 

del libMofiler-android.jar
copy ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\classes.jar libMofiler-android.jar /Y 
copy ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\mofiler-sdk.jar mofiler-sdk.jar /Y 

winrar x mofiler-sdk.jar * combine\ -y
winrar x volley.jar * combine\ -y
cd combine\
winrar a ..\libMofiler-android.jar * -r
cd..
rmdir combine /s /q

echo "packing Mofiler-ane..."
adt -package -target ane mofiler-sdk.ane extension.xml -swc mofiler-ane.swc -platform Android-ARM library.swf libMofiler-android.jar
echo "Done!"
pause