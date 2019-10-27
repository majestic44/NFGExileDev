if !(IsServer) exitWith {};

private _posunit = _this;
private _traptype = "uns_tripwire_punj1_d";

//check if trap has already been launched
private _rL = _posunit nearEntities [_traptype, 10];
if (_rL isEqualTo []) then 
{
	//create trap
	private _obj = _traptype createvehicle [ (_posunit select 0),(_posunit select 1),0];
	_obj setpos [(_posunit select 0),(_posunit select 1),0];
//	_obj setVectorDirAndUp [[0,0,1],[1,1,1]];
};