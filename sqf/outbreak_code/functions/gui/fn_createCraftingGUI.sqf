disableSerialization;

_dialog = uiNamespace getVariable ["rscCraftingMenu", displayNull];
	
if (isNull _dialog) then {
	call fnc_createCraftingDialog;
};

fnc_createCraftingDialog = {
	
	_dialog = createDialog "rscCraftingMenu";
	_idc = uiNamespace getVariable "rscCraftingMenu";

	_control = _idc displayCtrl 35902;
	_index = _control lbAdd ("SELECT RECIPE");
	_control lbSetCurSel _index;

	_index = _control lbAdd ("Test recipe");
	_control lbSetData [_index, "Test recipe443"];

	_control = _idc displayCtrl 35908;
	_control ctrlSetText "Hammer x1";

	_control = _idc displayCtrl 35909;
	_control ctrlSetText "Nails x10";

	_control = _idc displayCtrl 35910;
	_control ctrlSetText "Log x3";

	_control = _idc displayCtrl 35911;
	_control ctrlSetText "Rock x8";

	_control = _idc displayCtrl 35903;
	_control ctrlSetText "\addons\outbreak_assets\textures\items\hammer.paa";

	_control = _idc displayCtrl 35904;
	_control ctrlSetText "\addons\outbreak_assets\textures\items\nails.paa";

	_control = _idc displayCtrl 35905;
	_control ctrlSetText "\addons\outbreak_assets\textures\items\log.paa";

	_control = _idc displayCtrl 35906;
	_control ctrlSetText "\addons\outbreak_assets\textures\items\rock.paa";
};