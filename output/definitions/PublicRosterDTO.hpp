#ifndef SWAGGER_TYPES_PublicRosterDTO_HPP
#define SWAGGER_TYPES_PublicRosterDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct PublicRosterDTO {
'    // 
    int64_t id;
    // 
    int32_t logo;
    // 
    int32_t logoColor;
    // 
    std::vector<uint64_t> memberIds;
    // 
    std::string name;
    // 
    std::string shortName;
  };

  void to_json(nlohmann::json& j, const PublicRosterDTO& v) {
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["logoColor"] = v.logoColor;
    j["memberIds"] = v.memberIds;
    j["name"] = v.name;
    j["shortName"] = v.shortName;
  }

  void from_json(const nlohmann::json& j, PublicRosterDTO& v) {
    v.id = j.at("id").get<int64_t>;
    v.logo = j.at("logo").get<int32_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>;
    v.name = j.at("name").get<std::string>;
    v.shortName = j.at("shortName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PublicRosterDTO_HPP
