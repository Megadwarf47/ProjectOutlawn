///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class DestructionVolumeData;
}

namespace fb {
	class DestructionVolumeComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DestructionVolumeComponentData"); }
		virtual ~DestructionVolumeComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		DestructionVolumeComponentData() {
		};

		CtrRef<DestructionVolumeData> m_destructionVolumeData; // 0x70 (112)
	}; // 0x80 (128)
}

