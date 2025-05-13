///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTTaskFunc.h>
#include <fb/PVZPathLinkType.h>

namespace fb {
	class BT_DoPathfindingLinkUsage : public BTTaskFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_DoPathfindingLinkUsage"); }
		virtual ~BT_DoPathfindingLinkUsage() override {}
		BT_DoPathfindingLinkUsage() {
			m_linkType = PVZPathLinkType::PVZPathLinkType_Undefined;
			m_canUseLink = false;
		};

		PVZPathLinkType m_linkType; // 0x18 (24)
		bool m_canUseLink; // 0x1C (28)
	}; // 0x20 (32)
}

