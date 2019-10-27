//Modded by SSG Anhor for Exile Vietnam
 
private["_targetPlayer", "_flyHeight", "_speed", "_direction", "_targetPosition", "_distance", "_endPosition", "_planeClass", "_i", "_startPosition", "_pilot", "_plane", "_waypoint"];
_group = createGroup east;
_targetPlayer = selectRandom allPlayers;
format ["Ambient Fly Over - Heading to %1...", _targetPlayer] call ExileServer_util_log;
_flyHeight = 150;
_speed = 250;
_direction = random 360;
_targetPosition = 
[
	(getPos _targetPlayer) select 0, 
	(getPos _targetPlayer) select 1, 
	_flyHeight
];
_distance = worldSize * 0.75;
_endPosition = 
[
	(_targetPosition select 0) - (sin _direction) * _distance,
	(_targetPosition select 1) - (cos _direction) * _distance,
	_flyHeight
];
_planeClass = selectRandom 
[
	"uns_A1H_CAS"
];
for "_i" from 1 to (1 + (floor (random 3))) do 
{
	_distance = 4000 + (_i * 400);
	_startPosition = 
	[
		(_targetPosition select 0) + (sin _direction) * _distance,
		(_targetPosition select 1) + (cos _direction) * _distance,
		800 
	];
	_pilot = _group createUnit ["uns_nvaf_pilot1", _startPosition, [], 100, "NONE"];
	_pilot setSkill 0.5;
	[_pilot] joinSilent _group;
	_plane = createVehicle [_planeClass, _startPosition, [], 100, "FLY"];
	clearBackpackCargoGlobal _plane;
	clearWeaponCargoGlobal _plane;
	clearMagazineCargoGlobal _plane;
	clearItemCargoGlobal _plane;
	_plane setVehicleAmmo 1;
	_plane setFuel 1;
	_pilot assignAsDriver _plane;
	_pilot moveInDriver _plane;
	_pilot allowDamage true;
	_plane allowDamage true;
	_plane flyInHeight _flyHeight;
	_plane setDir _direction;
	_plane setVelocity [(sin _direction) * _speed, (cos _direction) * _speed, 0];
};
_group allowFleeing 0;
_group setBehaviour "COMBAT";
_group setSpeedMode "FULL";
_group setFormation "WEDGE";
_group setCombatMode "RED";
_waypoint = _group addWaypoint [getPos _targetPlayer, 0];
_waypoint setWaypointType "SAD";
_waypoint setWaypointCompletionRadius 800;
_waypoint setWaypointStatements ["true", "'Ambient Fly Over - Reached player...' call ExileServer_util_log;"];
_waypoint = _group addWaypoint [_endPosition, 0];
_waypoint setWaypointType "SAD";
_waypoint setWaypointCompletionRadius 800;
_waypoint setWaypointStatements ["true", "'Ambient Fly Over - Reached end...' call ExileServer_util_log; { deleteVehicle (vehicle _x); deleteVehicle _x; } forEach thisList;"];