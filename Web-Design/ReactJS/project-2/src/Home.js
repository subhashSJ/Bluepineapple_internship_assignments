import React, { useEffect, useState } from "react";
import Base from "./Base";
import { useNavigate } from "react-router-dom";
import "./index.css";

const Home = () => {
  let navigate = useNavigate();

  const [animal, setAnimal] = useState("");

  const [animals, setAnimals] = useState([
    {
      _id: 1,
      name: "Lion",
      description:
        "The lion (Panthera leo) is a large cat of the genus Panthera native to Africa and India. It has a muscular, deep-chested body, short, rounded head, round ears, and a hairy tuft at the end of its tail. It is sexually dimorphic; adult male lions are larger than females and have a prominent mane. It is a social species, forming groups called prides. A lion's pride consists of a few adult males, related females, and cubs. Groups of female lions usually hunt together, preying mostly on large ungulates. The lion is an apex and keystone predator; although some lions scavenge when opportunities occur and have been known to hunt humans, the species typically does not.",
      imgSRC:
        "https://cdn.britannica.com/29/150929-050-547070A1/lion-Kenya-Masai-Mara-National-Reserve.jpg",
    },
    {
      _id: 2,
      name: "Tiger",
      description:
        "The tiger (Panthera tigris) is the largest living cat species and a member of the genus Panthera. It is most recognisable for its dark vertical stripes on orange fur with a white underside. An apex predator, it primarily preys on ungulates such as deer and wild boar. It is territorial and generally a solitary but social predator, requiring large contiguous areas of habitat, which support its requirements for prey and rearing of its offspring. Tiger cubs stay with their mother for about two years, then become independent and leave their mother's home range to establish their own.",
      imgSRC:
        "https://images.assettype.com/esakal/import/s3fs-public/news-story/cover-images/0tigar_2011.jpg",
    },
    {
      _id: 3,
      name: "Elephant",
      description:
        "Elephants are the largest existing land animals. Three living species are currently recognised: the African bush elephant, the African forest elephant, and the Asian elephant. They are an informal grouping within the proboscidean family Elephantidae. Elephantidae is the only surviving family of proboscideans; extinct members include the mastodons. Elephantidae also contains several extinct groups, including the mammoths and straight-tusked elephants. African elephants have larger ears and concave backs, whereas Asian elephants have smaller ears, and convex or level backs.",
      imgSRC:
        "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRlziYU7LfuNlS_1MgF9pxS3T0s5Qp_HA1msQ&usqp=CAU",
    },
    {
      _id: 4,
      name: "Monkey",
      description:
        "Monkey is a common name that may refer to most mammals of the infraorder Simiiformes, also known as the simians. Traditionally, all animals in the group now known as simians are counted as monkeys except the apes, a grouping known as paraphyletic; however in the broader sense based on cladistics, apes (Hominoidea) are also included, making the terms monkeys and simians synonyms in regard of their scope. Monkeys are divided into the families of New World monkeys (Platyrrhini) and Old World monkeys (Cercopithecidae in the strict sense; Catarrhini in the broad sense, which again includes apes).",
      imgSRC:
        "https://upload.wikimedia.org/wikipedia/commons/3/35/Olive_baboon_Ngorongoro.jpg",
    },
    {
      _id: 5,
      name: "Deer",
      description:
        "Deer or true deer are hoofed ruminant mammals forming the family Cervidae. The two main groups of deer are the Cervinae, including the muntjac, the elk (wapiti), the red deer, and the fallow deer; and the Capreolinae, including the reindeer (caribou), white-tailed deer, the roe deer, and the moose. Male deer of all species (except the Chinese water deer) as well as female reindeer, grow and shed new antlers each year. In this they differ from permanently horned antelope, which are part of a different family (Bovidae) within the same order of even-toed ungulates (Artiodactyla).",
      imgSRC:
        "https://upload.wikimedia.org/wikipedia/commons/f/f3/Fallow_deer_in_field.jpg",
    },
    {
      _id: 6,
      name: "Rabbit",
      description:
        "Rabbits, also known as bunnies or bunny rabbits, are small mammals in the family Leporidae (which also contains the hares) of the order Lagomorpha (which also contains the pikas). Oryctolagus cuniculus includes the European rabbit species and its descendants, the world's 305 breeds[1] of domestic rabbit. Sylvilagus includes 13 wild rabbit species, among them the seven types of cottontail. The European rabbit, which has been introduced on every continent except Antarctica, is familiar throughout the world as a wild prey animal and as a domesticated form of livestock and pet. With its widespread effect on ecologies and cultures, the rabbit is, in many areas of the world, a part of daily life—as food, clothing, a companion, and a source of artistic inspiration.",
      imgSRC:
        "https://upload.wikimedia.org/wikipedia/commons/thumb/5/50/Sylvilagus_bachmani_01035t.JPG/400px-Sylvilagus_bachmani_01035t.JPG",
    },
    {
      _id: 7,
      name: "Dog",
      description:
        "The dog or domestic dog (Canis familiaris[4][5] or Canis lupus familiaris[5]) is a domesticated descendant of the wolf which is characterized by an upturning tail. The dog is derived from an ancient, extinct wolf,[6][7] and the modern wolf is the dog's nearest living relative.[8] The dog was the first species to be domesticated,[9][8] by hunter–gatherers over 15,000 years ago,[7] before the development of agriculture.Due to their long association with humans, dogs have expanded to a large number of domestic individuals[10] and gained the ability to thrive on a starch-rich diet that would be inadequate for other canids.[11] Over the millennia, dogs became uniquely adapted to human behavior, and the human-canine bond has been a topic of frequent study",
      imgSRC:
        "https://upload.wikimedia.org/wikipedia/commons/thumb/c/c8/Black_Labrador_Retriever_-_Male_IMG_3323.jpg/800px-Black_Labrador_Retriever_-_Male_IMG_3323.jpg",
    },
  ]);

  useEffect(() => {
    if (animal !== "") {
      navigate("/animal", {
        state: animals.filter((element) => {
          return element._id == animal;
        }),
      });
    }
  });

  const form = () => {
    return (
      <div className="home">
        <h3>Please select a animal from following list</h3>

        <form className="m-2">
          <div className="form-group ">
            <select
              onChange={(e) => setAnimal(e.target.value)}
              className="form-control"
              placeholder="animal"
            >
              <option>Select</option>
              {animals &&
                animals.map((animal, index) => (
                  <option key={index} value={animal._id}>
                    {animal.name}
                  </option>
                ))}
            </select>
          </div>
        </form>
      </div>
    );
  };
  return (
    <Base
      title="Hello Animal Lovers!"
      description="Until one has loved an animal, a part of one's soul remains unawakened."
    >
      {form()}
    </Base>
  );
};

export default Home;
