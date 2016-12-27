package functions;

import android.os.Build;
import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;
import com.adobe.fre.FREObject;
import com.adobe.fre.FREWrongThreadException;

public class GetCurrentDeviceNameFunction implements FREFunction {

	private static final String TAG = "GetCurrentDeviceNameFunction";

	@Override
	public FREObject call(FREContext arg0, FREObject[] arg1) {
		Log.d(TAG, "called.");
		FREObject result = null;
		try {
//			result = FREObject.newObject(Build.USER);
			result = FREObject.newObject("nameeeee");
		} catch (FREWrongThreadException e) {
			e.printStackTrace();
		}
		return result;
	}

}