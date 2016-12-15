package functions;
import android.os.Build;
import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;
import com.adobe.fre.FREObject;
import com.adobe.fre.FREWrongThreadException;


public class GetIMEIFunction implements FREFunction {

	private static final String TAG = "GetIMEIFunction";

	@Override
	public FREObject call(FREContext arg0, FREObject[] arg1) {
		Log.d(TAG, "called.");
		FREObject result = null;
		try {
			result = FREObject.newObject(Build.FINGERPRINT);
		} catch (FREWrongThreadException e) {
			e.printStackTrace();
		}
		return result;
	}

}
