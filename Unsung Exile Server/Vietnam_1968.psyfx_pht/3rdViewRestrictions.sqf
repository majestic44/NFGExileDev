if (!isDedicated) then {

	waitUntil {!isNull (findDisplay 46)};



	if( (difficultyOption "thirdPersonView")isEqualTo 1) then
	{
		while {true} do {

			waitUntil {cameraView == "EXTERNAL" || cameraView == "GROUP"};

			if (((vehicle player)isKindOf "LandVehicle") && (speed (vehicle player)) >= 10) then {
				(vehicle player) switchCamera "Internal";
			};
			sleep 0.1;

        };
	};

};