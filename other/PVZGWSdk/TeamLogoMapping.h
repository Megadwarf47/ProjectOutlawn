///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class TeamLogoMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamLogoMapping"); }
		virtual ~TeamLogoMapping() override {}
		TeamLogoMapping() {
			m_faction = 0;
		};

		s32 m_faction; // 0x10 (16)
		CtrRef<TextureAsset> m_logoTexture; // 0x18 (24)
	}; // 0x20 (32)
}

