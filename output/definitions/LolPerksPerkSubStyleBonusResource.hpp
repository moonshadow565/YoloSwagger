#ifndef SWAGGER_TYPES_LolPerksPerkSubStyleBonusResource_HPP
#define SWAGGER_TYPES_LolPerksPerkSubStyleBonusResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPerksPerkSubStyleBonusResource {
'    // 
    int32_t perkId;
    // 
    int32_t styleId;
  };

  void to_json(nlohmann::json& j, const LolPerksPerkSubStyleBonusResource& v) {
    j["perkId"] = v.perkId;
    j["styleId"] = v.styleId;
  }

  void from_json(const nlohmann::json& j, LolPerksPerkSubStyleBonusResource& v) {
    v.perkId = j.at("perkId").get<int32_t>;
    v.styleId = j.at("styleId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkSubStyleBonusResource_HPP
