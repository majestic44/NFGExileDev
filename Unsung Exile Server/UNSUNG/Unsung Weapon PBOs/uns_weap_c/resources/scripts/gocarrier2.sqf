PRIVATE ["_carrier","_dir","_vec"];

_vec = _this select 0;
_carrier = nearestObjects [_vec, ['JDG_carrier_Spawner'], 150];sleep 0.1;
_dir = (getdir _carrier) -45;
_vec setPosASL (_carrier modelToWorld [4, -20, 18.4]);
_vec setdir _dir;
_vec removeaction Ures_airtaxi;
Ures_airtaxi = -1;
exit
