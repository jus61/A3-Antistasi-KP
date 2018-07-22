private "_time";
_time = _this select 0;

private _mytimer = createMarker ["timer", [0, -200]];
_mytimer setMarkerType "mil_warning";
_mytimer setMarkerSize [0.9, 0.9];
_mytimer setMarkerColor "ColorRED";

while {_time > 0} do {
	_time = _time - 5;
	_mytimer setMarkerText format ["Server Restart: %1", [_time] call BIS_fnc_secondsToString]; 	
	uiSleep 5;
};