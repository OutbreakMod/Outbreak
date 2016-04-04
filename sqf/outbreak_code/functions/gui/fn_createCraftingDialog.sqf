fnc_createCraftingDialog = {
	
	_dialog = createDialog "rscCraftingMenu";
	_idc = uiNamespace getVariable "rscCraftingMenu";

	call fnc_resetWindow;
	
	_control = _idc displayCtrl 35902;
	_index = _control lbAdd ("SELECT RECIPE");
	_control lbSetCurSel _index;
	
	_recipes = (configFile >> "CfgRecipes" >> "recipes") call BIS_fnc_getCfgData;
	
	{
		_classCfg = (configFile >> "CfgRecipes" >> _x);
		_recipeName = (_classCfg >> "recipeName") call BIS_fnc_getCfgData;
		
		_index = _control lbAdd _recipeName;
		_control lbSetData [_index, _x];
		
	} forEach _recipes;
	
	_control ctrlSetEventHandler ["LBSelChanged", "_this call fn_drawMaterials"];
};

fnc_resetWindow = {

	_idc = uiNamespace getVariable ["rscCraftingMenu", displayNull];
	
	_pictureIDC = 35904;
	_textIDC = 35912;

	for "_i" from 0 to 8 - 1 do { 
	
		_control = _idc displayCtrl _pictureIDC;
		_control ctrlSetText "";

		_control = _idc displayCtrl _textIDC;
		_control ctrlSetText "";
		
		_pictureIDC = _pictureIDC + 1;
		_textIDC = _textIDC + 1;
	};

};

fn_drawMaterials = {
	
	private ["_selection", "_selectedIndex", "_control", "_dialog", "_cfgName", "_magazine", "_recipe"];
	
	_control = _this select 0;  
	_selectedIndex = _this select 1; 
	_cfgName = _control lbData _selectedIndex;
	
	call fnc_resetWindow;
	
	_dialog = uiNamespace getVariable "rscCraftingMenu";
	_className = (configFile >> "CfgRecipes" >> _cfgName);
	_recipe = (_className >> "recipe") call BIS_fnc_getCfgData;

	_pictureIDC = 35904;
	_textIDC = 35912;
	
	for "_i" from 0 to (count _recipe) - 1 do { 
	
		_ingredient = _recipe select _i;
		
		_item = (configFile >> "CfgMagazines" >> _ingredient select 0);
		_amount = _ingredient select 1;
		
		_displayName = format["%1 x%2", ((_item >> "displayName") call BIS_fnc_getCfgData), _amount];
		_control = _dialog displayCtrl _textIDC;
		_control ctrlSetText _displayName;
	
		_control = _dialog displayCtrl _pictureIDC;
		_control ctrlSetText ((_item >> "picture") call BIS_fnc_getCfgData);
		
		_pictureIDC = _pictureIDC + 1;
		_textIDC = _textIDC + 1;
	};
	
};

disableSerialization;
_dialog = uiNamespace getVariable ["rscCraftingMenu", displayNull];

if (isNull _dialog) then {
	call fnc_createCraftingDialog;
} else {
	closeDialog 0;
}
	