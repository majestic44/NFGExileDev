Private["_ammo", "_unit","_bullet"];

_unit = _this select 0;
_ammo = _this select 4;
_bullet = _this select 6;


if (_unit != player) exitwith{};
if (!(_ammo in ['PipeBomb','mine','mineE','BAF_ied_v1','BAF_ied_v2','BAF_ied_v3','BAF_ied_v4'])) exitwith{};


//gdtmod_satchel_bomb = nearestObject  [_unit, _ammo];
gdtmod_satchel_bomb =_bullet;
player removeAction gdtmod_satchel_throw;
gdtmod_satchel_throw = player addaction ["Throw Satchel", "uns_weap\gdtmod_satchel\throw.sqf", [], -1, false, false, "", "(alive gdtmod_satchel_bomb) and ((player distance gdtmod_satchel_bomb) < 1.5) and (player == vehicle player) "];
