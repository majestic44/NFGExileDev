// Sensors missiles setup
class Components//: Components
{
	class SensorsManagerComponent
	{
		class Components
		{
			class IRSensorComponent: SensorTemplateIR
			{
				class AirTarget 
				{
					minRange = 100;
					maxRange = 4200;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget: AirTarget {};
				angleRangeHorizontal=120;
				angleRangeVertical=65;
				maxTrackableSpeed=260;
				aimDown=0;
			};
		};
	};
};