#ifndef SWAGGER_TYPES_MissionProgressDTO_HPP
#define SWAGGER_TYPES_MissionProgressDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct MissionProgressDTO {
'    // 
    int32_t currentProgress;
    // 
    int32_t lastViewedProgress;
    // 
    int32_t totalCount;
  };

  void to_json(nlohmann::json& j, const MissionProgressDTO& v) {
    j["currentProgress"] = v.currentProgress;
    j["lastViewedProgress"] = v.lastViewedProgress;
    j["totalCount"] = v.totalCount;
  }

  void from_json(const nlohmann::json& j, MissionProgressDTO& v) {
    v.currentProgress = j.at("currentProgress").get<int32_t>;
    v.lastViewedProgress = j.at("lastViewedProgress").get<int32_t>;
    v.totalCount = j.at("totalCount").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MissionProgressDTO_HPP
