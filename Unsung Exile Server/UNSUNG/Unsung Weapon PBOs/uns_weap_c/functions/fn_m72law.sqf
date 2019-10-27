private _unit = _this select 0;
private _weapon = _this select 2;
private _bullet = _this select 6;

if (_weapon == "uns_m72" and local _unit) then 
{
	//allow time to get back in cover but not time to reload
	sleep 2;
	_unit playAction "CROUCH";
	_unit removeWeapon _weapon;
	private _weaponused = "uns_M72_used" createVehicle position _unit;
	_unit playAction "gestureCover";
	_weaponused setDir (getDir _unit) +90;
	_weaponused setPos (_unit modelToWorld [0,0,0]);	
};
if (_weapon == "uns_m127a1_flare" and local _unit) then 
{
	//allow time to reach fly height
	sleep 4.5;
	private _flare = "uns_vecflare_r" createvehicle [ (getpos _unit select 0),(getpos _unit select 1),((getposASL _unit select 2)+300)];
	_flare setVectorDirAndUp [[0,-1,0],[1,0,0]];
	_flare setVelocity [0, 0, -0.15];
//	hint format ["flare created at x: %1 y: %2 z: %3", (position _flare select 0), (position _flare select 1), (position _flare select 2)];
};
