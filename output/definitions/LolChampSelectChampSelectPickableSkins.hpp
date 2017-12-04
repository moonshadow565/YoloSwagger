#ifndef SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampSelectChampSelectPickableSkins {
'    // 
    std::vector<int32_t> skinIds;
  };

  void to_json(nlohmann::json& j, const LolChampSelectChampSelectPickableSkins& v) {
    j["skinIds"] = v.skinIds;
  }

  void from_json(const nlohmann::json& j, LolChampSelectChampSelectPickableSkins& v) {
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectPickableSkins_HPP
