//fill any empty fuel cans
PRIVATE ["_player","_qty"];
_player = player;
_player removeAction Ures_player_fillfuel;
Ures_player_fillfuel = -1;

if ("uns_ItemFuelcanEmpty" in magazines _player) then 
{
	_qty = {_x == "uns_ItemFuelcanEmpty"} count magazines _player;
	for "_x" from 1 to _qty do 
	{
		_player removeMagazine "uns_ItemFuelcanEmpty";
		_player addMagazine "uns_ItemFuelcan";
	};
	_player say "fill";
//	playsound "fill";
	_player playActionNow "Medic";
	hintsilent format ["%1 Fuel Cans filled",_qty];
};

