//Eggbeast heal with medkit action
PRIVATE ["_player","_myclaymores","_x"];

_player = _this select 0;

//_player removeAction Ures_clacker;
//_player playmove "AinvPknlMstpSlayWrflDnon_healed"; //to do

_player say "M57clacker";

//find claymores within 100m
_myclaymores = nearestObjects [_player, ["uns_m18apmine","ClaymoreDirectionalMine_Remote_Ammo"], 100];

//_ct = count _myclaymores;
//hint format ["count %1",_ct];

{_x setDamage 1;sleep 0.1;}forEach _myclaymores;

//Ures_clacker = -1;