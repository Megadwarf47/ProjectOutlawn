///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ObjectBlueprint.h>

namespace fb {
	class MeshAsset;
	class ObjectVariation;
}

namespace fb {
	class MeshAndVariationPair : public ObjectBlueprint {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshAndVariationPair"); }
		virtual ~MeshAndVariationPair() override {}
		MeshAndVariationPair() {
		};

		CtrRef<MeshAsset> m_meshAsset; // 0x48 (72)
		CtrRef<ObjectVariation> m_variation; // 0x50 (80)
	}; // 0x58 (88)
}

