///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class BeamAnchorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BeamAnchorComponentData"); }
		virtual ~BeamAnchorComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		BeamAnchorComponentData() {
		};

		Vec3 m_beamAnchor; // 0x70 (112)
	}; // 0x80 (128)
}

