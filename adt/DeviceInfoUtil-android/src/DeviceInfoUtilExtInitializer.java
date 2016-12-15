
import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREExtension;


public class DeviceInfoUtilExtInitializer implements FREExtension {

	private static final String TAG = "DeviceInfoUtilExtInitializer";

	public static DeviceInfoUtil context;
	
	public FREContext createContext(String arg0) {
		Log.d(TAG, "called.");
		return context = new DeviceInfoUtil();
	}

	public void dispose() {
		context = null;
	}

	public void initialize() {

	}

	public static void log(String message)
	{
		Log.d(TAG, message);
	}
}
