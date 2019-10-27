// Author: *ZN Anhor

if (!isServer) exitWith {};

_startingdate = [1968, 1, 21, 0, 00];				// year, month, day, hour, minute

setdate _startingdate;

while {true} do
{
	if (daytime >= 18 || daytime < 6) then			// night time from xx to xx
	{
		setTimeMultiplier 4							// time multiplier at night time 
	}
	else
	{
		setTimeMultiplier 4							// time multiplier at day time 
	};

	uiSleep 120;
};