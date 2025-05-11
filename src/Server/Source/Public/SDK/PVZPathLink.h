///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CustomPathLinkData.h>
#include <fb/PVZPathLinkType.h>

namespace fb {
	class PVZPathLink : public CustomPathLinkData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZPathLink"); }
		virtual ~PVZPathLink() override {}
		PVZPathLink() {
			m_pathLinkType = PVZPathLinkType::PVZPathLinkType_Vault;
		};

		PVZPathLinkType m_pathLinkType; // 0x10 (16)
	}; // 0x18 (24)
}

