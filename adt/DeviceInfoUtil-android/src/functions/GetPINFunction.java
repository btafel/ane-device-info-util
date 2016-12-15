package functions;
import android.content.Context;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;
import com.adobe.fre.FREObject;
import com.adobe.fre.FREWrongThreadException;


public class GetPINFunction implements FREFunction {

	private static final String TAG = "GetPINFunction";

	@Override
	public FREObject call(FREContext arg0, FREObject[] arg1) {
		Log.d(TAG, "called.");
		FREObject result = null;
		try {
			final String deviceId = ((TelephonyManager) arg0.getActivity().getBaseContext().getSystemService(Context.TELEPHONY_SERVICE)).getDeviceId();
		    if (deviceId != null) {
				result = FREObject.newObject(deviceId);
		    } else {
				result = FREObject.newObject(Build.ID);
		    }
		} catch (FREWrongThreadException e) {
			e.printStackTrace();
		}
		return result;
	}

}
