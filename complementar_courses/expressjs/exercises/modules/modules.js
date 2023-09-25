export function sum(a, b) {
  return a + b
}

export function media(notes) {
  let media = 0
  notes.forEach(note => {
    media+=note
  });

  media /= notes.length

  if(media >= 7) return 'Aprovado'
  else return 'Reprovado'
}