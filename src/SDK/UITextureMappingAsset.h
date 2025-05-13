///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/UITextureMappingCompartment.h>
#include <fb/UITextureMappingOutputEntry.h>

namespace fb {
	class UITextureMappingAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITextureMappingAsset"); }
		virtual ~UITextureMappingAsset() override {}
		UITextureMappingAsset() {
			m_compartment = UITextureMappingCompartment::UITextureMappingCompartment_Default;
			m_disableAtlas = false;
			m_forceAtlas = false;
		};

		UITextureMappingCompartment m_compartment; // 0x18 (24)
		Array<UITextureMappingOutputEntry> m_output; // 0x20 (32)
		bool m_disableAtlas; // 0x28 (40)
		bool m_forceAtlas; // 0x29 (41)
	}; // 0x30 (48)
}

