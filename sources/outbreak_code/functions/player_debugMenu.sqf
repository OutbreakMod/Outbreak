/*
	Debug menu for player (stats)
	@author: TheAmazingAussie
*/

if (isNil 'debugMenu') then {
	debugMenu = true;
};

if (debugMenu) then {

	_time = (round(180-(serverTime)/60));
	_hours = (floor(_time/60));
	_minutes = (_time - (_hours * 60));
	
	switch(_minutes) do
	{
		case 9: {_minutes = "09"};
		case 8: {_minutes = "08"};
		case 7: {_minutes = "07"};
		case 6: {_minutes = "06"};
		case 5: {_minutes = "05"};
		case 4: {_minutes = "04"};
		case 3: {_minutes = "03"};
		case 2: {_minutes = "02"};
		case 1: {_minutes = "01"};
		case 0: {_minutes = "00"};
	};
	
	hintSilent parseText format ["
		<t size='1.25' align='center' color='#009999'>OUTBREAK</t><br/>
		<t size='1.05' align='center' color='#FFFFFF'>outbreakmod.com</t><br/> 
		<t size='0.95' align='left' color='#FFFFFF'></t><t size='0.95 align='right'></t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>Players Online: </t><t size='0.95' align='right'>%1</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>Zombies killed: </t><t size='0.95' align='right'>%2</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>Murders: </t><t size='0.95' align='right'>%3</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>Blood: </t><t size='0.95' align='right'>%4</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>Health: </t><t size='0.95' align='right'>%5</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'>FPS: </t><t size='0.95' align='right'>%6</t><br/>
		<t size='0.95' align='left' color='#FFFFFF'></t><t size='0.95' align='right'></t><br/>
		<t size='1.15' align='center' color='#5882FA'>Server restart in %7:%8</t><br/>",
			
		(count playableUnits),
		(0), // zed kills
		(0), // murders
		(player getVariable['blood', 6000]),
		(player getVariable['health', 6000]),
		(round diag_fps),
		_hours,
		_minutes
	];
	
} else {
	hintSilent '';
};