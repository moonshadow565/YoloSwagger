#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSpell_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSpell_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampionsCollectionsChampionSpell {
'    // 
    std::string description;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSpell& v) {
    j["description"] = v.description;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSpell& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSpell_HPP
