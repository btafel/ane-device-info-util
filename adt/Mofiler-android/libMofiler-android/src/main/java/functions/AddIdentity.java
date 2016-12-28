package functions;

import android.util.Log;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;
import com.adobe.fre.FREObject;
import com.mofiler.Mofiler;

public class AddIdentity implements FREFunction {

	private static final String TAG = "AddIdentityFunction";

	@Override
	public FREObject call(FREContext arg0, FREObject[] arg1) {
		Log.d(TAG, "called.");
		FREObject result = null;
		try {

			Mofiler mof = Mofiler.getInstance(arg0.getActivity());
			mof.addIdentity(arg1[0].getAsString(), arg1[1].getAsString());
			result = FREObject.newObject(true);
		} catch (Exception e) {
//			e.printStackTrace();
			Log.e(TAG, "error", e);
		}
		return result;
	}

}
