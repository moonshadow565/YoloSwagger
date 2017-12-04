#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampionsGameDataChampionChroma {
'    // 
    std::string chromaPath;
    // 
    std::vector<std::string> colors;
    // 
    int32_t id;
  };

  void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma& v) {
    j["chromaPath"] = v.chromaPath;
    j["colors"] = v.colors;
    j["id"] = v.id;
  }

  void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma& v) {
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.colors = j.at("colors").get<std::vector<std::string>>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
