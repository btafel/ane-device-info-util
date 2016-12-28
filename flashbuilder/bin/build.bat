rem winrar e ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\libMofiler-android-release.aar classes.jar -y ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\ 
rem copy ..\..\adt\Mofiler-android\libMofiler-android\build\outputs\aar\classes.jar libMofiler-android.jar /Y 
echo "packing Mofiler-ane..."
adt -package -target ane mofiler-sdk.ane extension.xml -swc mofiler-ane.swc -platform Android-ARM library.swf libMofiler-android.jar 
echo "Done!"
pause