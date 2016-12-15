package functions;
import android.content.Context;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;
import com.adobe.fre.FREObject;


public class GetCurrentMACAddressFunction implements FREFunction {

	private static final String TAG = "GetCurrentMACAddressFunction";

	@Override
	public FREObject call(FREContext context, FREObject[] arg1) {
		Log.d(TAG, "called.");
		FREObject result = null;
		try {
			
			WifiManager manager = (WifiManager) context.getActivity().getSystemService(Context.WIFI_SERVICE);
			WifiInfo info = manager.getConnectionInfo();
			result = FREObject.newObject(info.getMacAddress());
		} catch (Exception e) {
			e.printStackTrace();
		}
		return result;
	}

}
