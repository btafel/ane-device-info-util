
import java.util.HashMap;
import java.util.Map;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;

import functions.GetCurrentDeviceNameFunction;
import functions.GetCurrentMACAddressFunction;
import functions.GetCurrentSSIDFunction;
import functions.GetDeviceModelNameFunction;
import functions.GetIMEIFunction;
import functions.GetPINFunction;

public class DeviceInfoUtil extends FREContext {

	
	public DeviceInfoUtil() {}
	
	@Override
	public void dispose() {
	}

	@Override
	public Map<String, FREFunction> getFunctions() {
		Map<String, FREFunction> functions = new HashMap<String, FREFunction>();
		functions.put("getCurrentSSID", new GetCurrentSSIDFunction());
		functions.put("getCurrentMACAddress", new GetCurrentMACAddressFunction());
		functions.put("getCurrentDeviceName", new GetCurrentDeviceNameFunction());
		functions.put("getPIN", new GetPINFunction());
		functions.put("getIMEI", new GetIMEIFunction());
		functions.put("getDeviceModelName", new GetDeviceModelNameFunction());
		return functions;
	}

}
