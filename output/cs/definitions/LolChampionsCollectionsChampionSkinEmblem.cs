using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampionsCollectionsChampionSkinEmblem
    {
        [DataMember(Name = "emblemPath")]
        LolChampionsCollectionsChampionSkinEmblemPath EmblemPath { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "positions")]
        LolChampionsCollectionsChampionSkinEmblemPosition Positions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionSkinEmblem {\n");
            sb.Append("  EmblemPath: ").Append(EmblemPath).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Positions: ").Append(Positions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}