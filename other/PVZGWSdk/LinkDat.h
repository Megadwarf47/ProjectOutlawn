///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/NavLinkType.h>

namespace fb {
	class CustomPathLinkData;
	class LinkFlowTune;
}

namespace fb {
	class LinkDat : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkDat"); }
		virtual ~LinkDat() override {}
		LinkDat() {
			m_layerMask = 4294967295;
			m_linkType = NavLinkType::CUSTOM_LINK;
			m_linkUsageFlags = 4294967295;
			m_penaltyMult = 1.f;
			m_maxSnapDist = 12.f;
			m_mayUseDist = 1.f;
			m_mustUseDist = 0.f;
			m_stopToUseLink = false;
		};

		u32 m_layerMask; // 0x10 (16)
		NavLinkType m_linkType; // 0x14 (20)
		u32 m_linkUsageFlags; // 0x18 (24)
		float m_penaltyMult; // 0x1C (28)
		float m_maxSnapDist; // 0x20 (32)
		float m_mayUseDist; // 0x24 (36)
		float m_mustUseDist; // 0x28 (40)
		CtrRef<CustomPathLinkData> m_userData; // 0x30 (48)
		CtrRef<LinkFlowTune> m_linkFlowTune; // 0x38 (56)
		bool m_stopToUseLink; // 0x40 (64)
	}; // 0x48 (72)
}

