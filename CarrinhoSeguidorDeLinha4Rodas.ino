.card {
    width: 260px;
    background-color: rgb(255, 255, 255);
    border-radius: 20px;
    padding: 20px;
    margin: 20px;
    box-shadow:0 4px 8px rgba(0, 0, 0, 0.1);}

.cardImagem {
    height: 240px;
    width: 100%;
    object-fit: cover;
}

.cardTitle {
    font-size: 24px;
    font-weight: bold;
    margin: 5px;
}
#btnCard{
    color: white;
    font-weight: 500;
    border-radius: 10px;
    padding: 10px;
    text-decoration: none;
    background-color: blueviolet;
    margin-top: 15px;
    width: 50%;
    margin-inline: auto;
    transition: all ease-in-out 0.3;



}
#btnCard:hover{
    transform: scale(1.1);
}

.cardBody{
    display: flex;
    flex-direction: column;
    gap: 1rem;
}