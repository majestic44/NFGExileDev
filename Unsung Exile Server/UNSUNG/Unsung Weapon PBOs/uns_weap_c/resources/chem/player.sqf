private	_player = _this select 0;

private	_maxChemCont = 15;
private	_maxBlur = 2;
private	_maxBlur2 = 0.05;
private	_maxChab = 0.15;
private	_maxShake = 5;
private	_maxShakeFreq = 2;

private	_gas_sounds =["choke01","choke02","choke03","choke04","choke05","choke06","choke07","choke08","dry_heave","dry_heave3","dry_heave4","puke_1","puke_2","puke_splash"];
private	_cgas = count _gas_sounds -1;

private	_blur = ppEffectCreate ["dynamicBlur",401];
private	_blur2 = ppEffectCreate ["radialBlur",402];
//_color = ppEffectCreate ["colorCorrections",2501];
private	_chab = ppEffectCreate ["chromAberration",403];

_player setVariable ["BD_Chem_ChemContamination",0];

private _looptime = 30;

hint "starting fx";

while{_looptime >0 and (alive _player)}do
{
	private _chemCont = _player getVariable ["BD_Chem_ChemContamination",0];
	sleep 0.2;
	private _prevChemCont = _chemCont;
	//apply fx if affected
	if (alive _player) then
	{
		if (_chemCont > 0.3) then
		{
			_chemCont = _maxChemCont min (_player getVariable ["BD_Chem_ChemContamination",0.3]);
			private _chemContPercent = _chemCont / _maxChemCont;
			if(_chemCont <= _prevChemCont)then
			{
				private _chemContDiff = _prevChemCont - _chemCont;
				_chemCont = 0 max (_chemCont - 0.12 - (_chemContDiff * 0.2));
			};
			_player setVariable ["BD_Chem_ChemContamination",_chemCont];
			_blur ppEffectAdjust [_maxBlur * _chemContPercent];
			_blur ppEffectCommit 0.8;
			_blur ppEffectEnable true;

			_blur2 ppEffectAdjust [_maxBlur2 * _chemContPercent,_maxBlur2 * _chemContPercent,0.2,0.2];
			_blur2 ppEffectCommit 0.8;
			_blur2 ppEffectEnable true;

			_chab ppEffectEnable true;
			_chab ppEffectAdjust [_maxChab * _chemContPercent,_maxChab * _chemContPercent,true];
			_chab ppEffectCommit 0.5;

			//_color ppEffectAdjust [1, 1 + (1.2 * _chemContPercent), 0, [0.03, 0.1, 0.06, 0.2 * _chemContPercent], [1.0, 0.5, 0.5, 0.1], [0.199, 0.587, 0.114, 0.0]];
			//_color ppEffectCommit 0.8;
			//_color ppEffectEnable true;

			addCamShake [_maxShake * _chemContPercent,0.85,3 + (_maxShakeFreq * _chemContPercent)];

			private _r = round random _cgas;
			private _snd = _gas_sounds select _r;
			_player say3D [_snd, 50,1];
			sleep 0.8;
			_prevChemCont = _chemCont;
		} else
		{
			_player setVariable ["BD_Chem_ChemContamination",0];
			_blur ppEffectAdjust [0];
			_blur ppEffectCommit 1.2;
			_blur2 ppEffectAdjust [0,0,0,0];
			_blur2 ppEffectCommit 1.2;
			_chab ppEffectAdjust [0,0,true];
			_chab ppEffectCommit 1.2;
		//_color ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0.5, 0.5, 0.5, 1], [0, 0, 0, 0]];
		//_color ppEffectCommit 1.2;
		};
	};
	sleep 1.25;
	_looptime = _looptime -1;
	hint format ["%1", _looptime];
};
//reset
_blur ppEffectEnable false;
_blur2 ppEffectEnable false;
_chab ppEffectEnable false;
//_color ppEffectEnable false;
hint "fx ended";
