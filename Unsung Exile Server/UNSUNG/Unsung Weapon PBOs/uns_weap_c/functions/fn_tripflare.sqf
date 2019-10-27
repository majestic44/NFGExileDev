if !(IsServer) exitWith {};

private _posunit = _this;

//check if flare has already been launched
private _rL = [ (_posunit select 0),(_posunit select 1),2] nearObjects ["uns_m127_rocket_ammo", 20];
if (_rL isEqualTo []) then 
{
	//launch flare up
	private _obj = "uns_m127_rocket_ammo" createvehicle [ (_posunit select 0),(_posunit select 1),2];
	_obj setVectorDirAndUp [[0,0,1],[1,1,1]];

	//allow time to reach fly height
	sleep 4.5;
	//pop flare
	private _flare = "uns_planeflare_medium" createvehicle [ (_posunit select 0),(_posunit select 1),300];
	_flare setVectorDirAndUp [[0,-1,0],[1,0,0]];
	_flare setVelocity [0, 0, -0.15];
};