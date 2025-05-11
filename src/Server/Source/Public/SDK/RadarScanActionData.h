///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>
#include <fb/RadarScanMode.h>

namespace fb {
	class RadarScanActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadarScanActionData"); }
		virtual ~RadarScanActionData() override {}
		RadarScanActionData() {
			m_scanMode = RadarScanMode::RSM_LeftToRight;
			m_scanAreaPadding = 100.f;

			m_actionType = CommanderActionType::CommanderActionType_RadarScan;
		};

		RadarScanMode m_scanMode; // 0x30 (48)
		float m_scanAreaPadding; // 0x34 (52)
	}; // 0x38 (56)
}

