//Exported via Arma Dialog Creator (https://github.com/kayler-renslow/arma-dialog-creator)

#include "CustomControlClasses.h"
class TAB_CMDR
{
	idd = -1;
	
	class ControlsBackground
	{
		class TAB_CMDR_BACKGROUND : MUI_BG_BLACKTRANSPARENT 
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.225;
			w = safeZoneW * 0.28854167;
			h = safeZoneH * 0.49537038;
			style = 0;
			text = "";
			
		};
		class TAB_CMDR_STATIC_CREATE_A_LOCATION : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.01000001;
			y = 0.01000014;
			w = 0.34055589;
			h = 0.04;
			style = 0;
			text = "Create a location:";
			colorBackground[] = {0.702,0.702,0.102,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class TAB_CMDR_COMBO_LOC_TYPE
		{
			type = 4;
			idc = -1;
			x = 0.09000001;
			y = 0.11000001;
			w = 0.41000004;
			h = 0.04;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0.6784,0.2196,0.3882,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,0,0,1};
			colorSelectBackground[] = {0,0,0,1};
			colorText[] = {0.3216,0.7804,0.6118,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class TAB_CMDR_EDIT_LOC_NAME : MUI_BASE 
		{
			type = 2;
			idc = -1;
			x = 0.09000001;
			y = 0.06000002;
			w = 0.41000007;
			h = 0.04;
			style = 0;
			text = "Noname";
			autocomplete = "";
			colorBackground[] = {0.2,0.0118,0.5961,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {1,0,0,1};
			colorText[] = {0.8,0.9882,0.4039,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		class TAB_CMDR_STATIC_0 : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.01;
			y = 0.06000001;
			w = 0.07000006;
			h = 0.04;
			style = 0;
			text = "Name:";
			colorBackground[] = {0.4,0.6,0.4,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		class TAB_CMDR_STATIC_1 : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.01;
			y = 0.11000004;
			w = 0.07;
			h = 0.04;
			style = 0;
			text = "Type:";
			colorBackground[] = {0.4,0.6,0.4,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		class TAB_CMDR_BUTTON_CREATE_LOC : MUI_BUTTON_TXT 
		{
			type = 1;
			idc = -1;
			x = 0.54000028;
			y = 0.09000019;
			w = 0.13000001;
			h = 0.09000002;
			text = "Create";
			borderSize = 0;
			colorBorder[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class TAB_CMDR_STATIC_HELP : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.01;
			y = 0.21000008;
			w = 0.68000039;
			h = 0.08;
			style = 16+0;
			text = "Construction resources must be in your backpack or in the vehicle you are looking at";
			colorBackground[] = {0.4,0.6,0.4,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		class TAB_CMDR_STATIC_BUILD_RESOURCES : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.09000001;
			y = 0.16000005;
			w = 0.41000007;
			h = 0.04;
			style = 0;
			text = "10 build resources";
			colorBackground[] = {0.4,0.6,0.4,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		class TAB_CMDR_STATIC_2 : MUI_BASE 
		{
			type = 0;
			idc = -1;
			x = 0.01;
			y = 0.16000005;
			w = 0.07;
			h = 0.04;
			style = 0;
			text = "Cost:";
			colorBackground[] = {0.4,0.6,0.4,1};
			font = "PuristaMedium";
			sizeEx = 0.04;
			
		};
		
	};
	
};
